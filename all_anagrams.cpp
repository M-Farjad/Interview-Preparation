bool findAllAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    
    int count[256] = {0};
    
    for (int i = 0; i < s1.length(); i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

bool findAllAnagram(string s1, string s2){
    s1= s1.toLowerCase();
    s2= s2.toLowerCase();

    s1 = s1.replaceAll(" ", "");
    s2 = s2.replaceAll(" ", "");

    int count[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
        count[s1[i] - 'a']++;
    }

    for (int i = 0; i < s2.length(); i++) {
        count[s2[i] - 'a']--;
    }

    for (int count : count) {
        if (count != 0) {
            return false;
        }
    }
    return true;
}