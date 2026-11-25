#include "ui/HowToScreen.h"

/* Clears every row of the selected tutorial page. */
extern "C" void howToClearPageLayout(HowToScreenWork *work)
{
    work->display.rows[0].start = 0;
    work->display.rows[0].end = 0;
    work->display.rows[0].kind = HOW_TO_PAGE_ROW_EMPTY;
    work->display.rows[0].choices[0] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[0].choices[1] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[0].choices[2] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[0].lastColumn = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[1].start = 0;
    work->display.rows[1].end = 0;
    work->display.rows[1].kind = HOW_TO_PAGE_ROW_EMPTY;
    work->display.rows[1].choices[0] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[1].choices[1] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[1].choices[2] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[1].lastColumn = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[2].start = 0;
    work->display.rows[2].end = 0;
    work->display.rows[2].kind = HOW_TO_PAGE_ROW_EMPTY;
    work->display.rows[2].choices[0] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[2].choices[1] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[2].choices[2] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[2].lastColumn = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[3].start = 0;
    work->display.rows[3].end = 0;
    work->display.rows[3].kind = HOW_TO_PAGE_ROW_EMPTY;
    work->display.rows[3].choices[0] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[3].choices[1] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[3].choices[2] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[3].lastColumn = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[4].start = 0;
    work->display.rows[4].end = 0;
    work->display.rows[4].kind = HOW_TO_PAGE_ROW_EMPTY;
    work->display.rows[4].choices[0] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[4].choices[1] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[4].choices[2] = HOW_TO_PAGE_NO_CHOICE;
    work->display.rows[4].lastColumn = HOW_TO_PAGE_NO_CHOICE;
    work->display.height = 0;
}
