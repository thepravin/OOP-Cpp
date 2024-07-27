// #include <cstring>
#include <iostream>
using namespace std;

class CWH
{
protected:
    float rating;
    string title;

public:
    CWH(string s, float r)
    {
        // strcpy(title, s);
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class Videos : public CWH
{
    float videoLength;

public:
    Videos(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title" << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is : " << videoLength << endl;
    }
};
class Text : public CWH
{
    int words;

public:
    Text(string s, float r, int vl) : CWH(s, r)
    {
        words = vl;
    }
    void display()
    {
        cout << "This is an text tutorial with title : " << title << endl;
        cout << "Ratings of this text tutorial : " << rating << "Out of 5 stars" << endl;
        cout << "No. of words in this text tutorial is : " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // video
    title = "Oop in c++";
    vlen = 31.4;
    rating = 4.5;
    Videos oopVideo(title, rating, vlen);
    // oopVideo.display();

    // text
    title = "Oop in c++ Text";
    words = 3104;
    rating = 4.55;
    Text oopText(title, rating, vlen);
    // oopText.display();

    CWH *demo[2];
    demo[0] = &oopVideo;
    demo[1] = &oopText;

    demo[0]->display();
    demo[1]->display();
}