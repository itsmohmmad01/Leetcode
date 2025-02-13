int lengthOfLastWord(char* s) {
    int len = 0, i = 0;
   
    while (s[i] != '\0') {
        i++;
    }
    while (i > 0 && s[i-1] == ' ') {
        i--;
    }
    while (i > 0 && s[i-1] != ' ') {
        len++;
        i--;
    }
    return len;
}
