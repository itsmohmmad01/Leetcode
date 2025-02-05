int desimal(char num)
{
    switch(num)
    {
        case 'M':
           return 1000;
           break;
         case 'D':
           return 500;
           break;
         case 'C':
           return 100;
           break;
         case 'L':
           return 50;
           break;
         case 'X':
           return 10;
           break;
         case 'V':
           return 5;
           break; 
         case 'I':
           return 1;
           break;
        default:
         return -1;       
    }
}
int romanToInt(char* s) {
    int sum=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(desimal(s[i])<desimal(s[i+1])){
            sum=sum-desimal(s[i]);
        }
        else
           sum+=desimal(s[i]);
    }
    return sum;
                                   
}
