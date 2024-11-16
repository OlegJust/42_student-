
//char *ft_substr(char const *s, unsigned int start, size_t len);

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *substr;
    size_t s_len;
    size_t i;

    if (!s)
        return NULL;

    s_len = strlen(s);

    // If start is beyond the length of s, return an empty string
    if (start >= s_len)
        return strdup("");

    // Adjust len if it exceeds the length of the remaining string from 'start'
    if (start + len > s_len)
        len = s_len - start;

    // Allocate memory for the substring (+1 for the null terminator)
    substr = (char *)malloc((len + 1) * sizeof(char));
    if (!substr)
        return NULL;

    // Copy characters from s to substr
    for (i = 0; i < len; i++)
        substr[i] = s[start + i];

    // Null-terminate the substring
    substr[i] = '\0';

    return substr;
}

#include <stdio.h>

int main() {
    char *s = "Hello, world!";
    char *substr = ft_substr(s, 7, 5);
    if (substr) {
        printf("Substring: %s\n", substr);  // Output: "world"
        free(substr);  // Don't forget to free the allocated memory
    }
    return 0;
}