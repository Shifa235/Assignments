#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>

using namespace std;

class words{
private:
	char *words[5];
	int count;
public:
	words() {count = 0;}
	~words()
       	{ for(int i=0;i<count;i++}
	    delete words[i];
	}
	int getcount(){ return count; };
	char *getMaxword(int pos) { return words[pos]; }
	
	void setwords(char *line)
	{
	   char *tokens = strtok(line," ");
	   while(tokens != NULL)
	   {
	       if(count == 5)
	           break;
	       words[count] = new char[strlen(tokens)];
	       strcpy(words[count],tokens);
	       tokens = strtok(NULL,";");
	       count+=1;
	       cout<<"setwords:count:"<<count<<endl;
	   }
	}

        void dispwords()
        {
           for(int i=0;i<count;i++)
              cout<<words[i]<<" ";
	      cout<<endl;

	}
        bool SNReplace(char *key, char*repstr)
        {
	      for(int i=0;i<count;i++)
	      {
	      if(strcmp(words[i],key) == 0)
	      {
		  words[i] = new char[strlen(repstr)+1];
		  strcpy(words[i], repstr);
		  return true;
              }
	   }
	   return false;
	}
        
        int getMaxwords()
        {
            int max=strlen(words[0]);
	    int pos=0;
	    for(int i=1;i<count;i++)
            {
		if(max < strlen(words[i]))
	            {
		       max = strlen(words[i]);
		       pos = i;
		       //cout<<"pos: "<<pos<<endl;
		    }
	    }

	    return pos;
        }

int main()
{
    words ws;
    string line;

    getline(cin,line);
    ws.setwords((char *)line.c str());
    ws.dispwords();

    cout<<"Max of all words:"<<ws.getMaxword(ws.getMaxwords())<<endl;
    cout<<"\nEnter the word to be searched:"<<endl;
    string key;
    cin>>key;
    cout<<"\nEnter the word to be replace with:"<<endl;
    string repstr;
    cin>>repstr;
    if(ws.SNReplace((char *)key.c_str(),(char*)repstr.c_str()) ==true) 
        {
	    cout<<"After Replacing the words"<<endl;
	    ws.dispwords();
	}
    return 0;
}


        
