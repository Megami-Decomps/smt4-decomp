/* Opens the bible screen at page 3. */
#include "common.h"
#include "bible/bibleMain.h"

extern "C" {

int bibleStart(int arg, int arg2);

extern BibleGlobals g_bible;

void bibleOpenMode3(void)
{
    g_bible.mode = 3;
    bibleStart(0, 0);
}

} /* extern "C" */
