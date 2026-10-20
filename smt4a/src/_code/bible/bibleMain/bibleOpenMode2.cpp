/* Opens the bible screen at page 2. */
#include "common.h"
#include "bible/bibleMain.h"

extern "C" {

int bibleStart(int arg, int arg2);

extern BibleGlobals g_bible;

void bibleOpenMode2(void)
{
    g_bible.mode = 2;
    bibleStart(0, 0);
}

} /* extern "C" */
