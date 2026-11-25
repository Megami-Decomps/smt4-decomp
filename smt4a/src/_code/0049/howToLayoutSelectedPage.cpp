/* NON_MATCHING: the row-boundary stores are combined, and scheduling differs around
 * the image-row selection and text-directory call. */
#include "ui/HowToScreen.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "code/Code0016_Smt4a.h"

extern "C" {
void howToClearPageLayout(HowToScreenWork *work);

/* Lays out text and image rows for the selected tutorial page. */
void howToLayoutSelectedPage(HowToScreenWork *work)
{
    enum { TEXT_ENTRIES_PER_PAGE = 10 };
    s32 textIndex = 0;
    s32 totalHeight = 0;
    s32 rowCount = work->display.definition->rowCount;
    u16 pageId = work->display.definition->id;
    howToClearPageLayout(work);
    s32 i = 0;
    if (rowCount > 0) {
        do {
            bool hasFirst = false;
            s32 height = 0;
            if (work->display.definition->imageARow - 1 == i) {
                work->display.rows[i].kind = HOW_TO_PAGE_ROW_IMAGE;
                s32 column = work->display.definition->imageAColumn;
                work->display.rows[i].choices[column] = 0;
                height = work->display.definition->imageAHeight;
                work->display.rows[i].lastColumn = work->display.rows[i].lastColumn >= column
                    ? work->display.rows[i].lastColumn : column;
                hasFirst = true;
            }
            if (work->display.definition->imageBRow - 1 == i) {
                work->display.rows[i].kind = HOW_TO_PAGE_ROW_IMAGE;
                s32 column = work->display.definition->imageBColumn;
                work->display.rows[i].choices[column] = 1;
                if (!hasFirst) {
                    height = work->display.definition->imageBHeight;
                }
                work->display.rows[i].lastColumn = work->display.rows[i].lastColumn >= column
                    ? work->display.rows[i].lastColumn : column;
            } else if (!hasFirst) {
                work->display.rows[i].kind = HOW_TO_PAGE_ROW_TEXT;
                work->display.rows[i].choices[0] = textIndex;
                asdTextDrawDirectoryEntry((AsdText *)work->display.handles[textIndex], 3, -1, 0, 3,
                    (RelativeDirectory *)work->messages[0], textIndex + (u32)pageId * TEXT_ENTRIES_PER_PAGE);
                height = statusDownScanSelectedEntryIndex((TextLine *)work->display.handles[textIndex]);
                ++textIndex;
            }
            work->display.rows[i].start = totalHeight;
            totalHeight += height;
            work->display.rows[i].end = totalHeight;
            ++i;
        } while (i < rowCount && i < HOW_TO_PAGE_MAX_ROWS);
    }
    work->display.height = totalHeight;
}
} /* extern "C" */
