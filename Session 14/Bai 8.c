#include <stdio.h>
#include <string.h>
int validAnagram(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return 0;
    }
    int frequency[26] = {0};
    for (int i = 0; i < len1; i++) {
        frequency[str1[i] - 'a']++;
    }
    for (int i = 0; i < len2; i++) {
        frequency[str2[i] - 'a']--;
        if (frequency[str2[i] - 'a'] < 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str1[] = "";
    char str2[] = "";
    printf("%d\n", validAnagram(str1, str2));  // true
    char str3[] = "aaz";
    char str4[] = "zza";
    printf("%d\n", validAnagram(str3, str4));  // false
    char str5[] = "anagram";
    char str6[] = "nagaram";
    printf("%d\n", validAnagram(str5, str6));  // true
    char str7[] = "rat";
    char str8[] = "car";
    printf("%d\n", validAnagram(str7, str8));  // false
    char str9[] = "texttwisttime";
    char str10[] = "timetwisttext";
    printf("%d\n", validAnagram(str9, str10));  // true
    return 0;
}
