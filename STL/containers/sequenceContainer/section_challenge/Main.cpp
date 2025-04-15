#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<cctype>
using namespace std;
class Song
{
     string name;
     string artist;
     int duration;
     public:
     Song(string name,string artist,int duration):name{name},artist{artist},duration{duration}
     {
       
     }
     string getName()
     {
        return name;
     }
     string getArtist()
     {
        return artist;
     }
     int getDuration()
     {
        return duration;
     }
};
int main()
{
   list<Song> playList{};
   playList.push_back(Song("star boy","The weekend",5));
   playList.push_back(Song("two steps","ed sheeran",3));
   playList.push_back(Song("let me down slowly","benjamin",4));
   char choice;
       cout<<"Enter the choice:\n1.play first song\n2.next song\n3.previous song\n4.list out the songs"<<endl;
  bool flag=true;
  auto it=playList.begin();
   while(flag)
   {
   
        cin>>choice;
        choice=tolower(choice);
        switch(choice){
             case 'f':
               
                 cout<<"playing the first song"<<endl;
                 cout<<"playing song : "<<(*it).getName()<<"...."<<endl;
                 break;
            case 'n':
                   it++;
                   if(it==playList.end())
                   {
                     cout<<"you reached the end of the list"<<endl;
                      break;
                   }
                  cout<<"playing song : "<<(*it).getName()<<"...."<<endl;
                  break;
            case 'p':
                if(it==playList.begin())
                {
                  cout<<"Enter 1 to play your first song"<<endl;
                  break;
                }
                  it--;
                  cout<<"playing song : "<<(*it).getName()<<"...."<<endl;
                  break;
            case 'l':
                cout<<"list of songs :"<<endl;
                for(auto song : playList)
                {
                    cout<<"song name : "<<song.getName()<<endl;
                    cout<<"Artist name : "<<song.getArtist()<<endl;
                    cout<<"Duration : "<<song.getDuration()<<" min"<<endl;
                }
                break;
            case 'e':
                 flag=false;
                 break;

        }

   }

}