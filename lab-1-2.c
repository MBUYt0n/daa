#include <stdio.h>
#include <string.h>

void recursion(char *glyphs, int length, char targetGlyph, int i)
{
    if(length == 0)
        return;
    else if (glyphs[i] == targetGlyph)
    {
        recursion(glyphs, length - 1, targetGlyph, i + 1);
        printf("%c", targetGlyph);
    }
    else
    {
        printf("%c", glyphs[i]);
        recursion(glyphs, length - 1, targetGlyph, i + 1);
    }
}

// Main function
int main()
{
    char enchantedGlyphs[100];
    char userTargetGlyph;
    // User input

    // printf("Enter the string: ");

    scanf("%s", enchantedGlyphs);
    // User Input
    // printf("Enter the alphabet : ");
    scanf(" %c", &userTargetGlyph);

    int glyphsLength = strlen(enchantedGlyphs);
    recursion(enchantedGlyphs, glyphsLength, userTargetGlyph, 0);
    return 0;
}