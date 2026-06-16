int lengthOfLongestSubstring(char* s) {
    int i,j,max_len=0;
    int cnt[256]={0}; //ASCII charecter
    for(int i=0;s[i]!=0;i++)
    {
       int len=0;
       memset(cnt,0,sizeof(cnt));// reset all count box zero
       for(int j=i;s[j]!=0;j++)
       {
        if(cnt[s[j]]==0)
        {
            cnt[s[j]]++;
            len++;
        }
        else
        {
            break;
        }
       }
       if(len>max_len)
       {
        max_len=len;
       }
    }
return max_len;
}