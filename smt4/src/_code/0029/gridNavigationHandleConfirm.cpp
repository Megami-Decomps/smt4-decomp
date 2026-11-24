/* NON_MATCHING: 68 raw lines (from the raw decompilation's 556); the calls, blocks and frame are retail's, and the
 * conditional getter calls (`bleq scrollListGetOffset`, `bleq` of the +0x1C getter) build as retail's `ldreq`. Left:
 * the column and the grid's count swap r5/r6; the row position's second accessor is branched here, predicated in
 * retail (one more instruction, which moves the later branch targets); the short-row test's last mla is scheduled
 * differently. */
#include "ui/GridNavigation.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

void FUN_002d56c4(u16 first, u16 second, u16 third, u16 fourth);
void labelsReset(void);
u32 FUN_001ff474(RowWidget *widget);
u32 scrollListSetSelection(RowWidget *widget, s32 index); // declcheck: local (the shared one takes the ScrollList view; a GridNavigation's lists are RowWidgets)
s32 scrollListGetTop(const RowWidget *widget);
s32 scrollListGetOffset(const RowWidget *widget);
s32 objectGetLengthField(const RowWidget *widget);
s32 FUN_002d5718(const RowWidget *widget);
u32 padIsButtonPressed(u32 button);

/* The grid's accessors, zero for an empty grid. Each is the body of a real function retail inlines here (IV's
 * resourceRunOperationIfUnblocked, listCursorGetRowIfUnblocked and gridNavigationGetItemCount for the rows,
 * resourceRunEmbeddedOperationIfUnblocked, objectPartRunUnlessLocked and uiGridNavigationEntryCount for the
 * columns), so they are written with those bodies. */
static __inline s32 gridRowTop(const GridNavigation *grid)
{
    if (grid->empty)
        return 0;
    return scrollListGetTop(&grid->rows);
}

static __inline s32 gridRowOffset(const GridNavigation *grid)
{
    if (grid->empty)
        return 0;
    return scrollListGetOffset(&grid->rows);
}

static __inline s32 gridRowCount(const GridNavigation *grid)
{
    if (grid->empty)
        return 0;
    return FUN_002d5718(&grid->rows);
}

static __inline s32 gridColumnTop(const GridNavigation *grid)
{
    if (grid->empty)
        return 0;
    return scrollListGetTop(&grid->columns);
}

static __inline s32 gridColumnOffset(const GridNavigation *grid)
{
    if (grid->empty)
        return 0;
    return scrollListGetOffset(&grid->columns);
}

static __inline s32 gridColumnCount(const GridNavigation *grid)
{
    if (grid->empty)
        return 0;
    return FUN_002d5718(&grid->columns);
}

/* Sets the held bit of direction key `key` (button 5, 6, 4 or 3) in `mask`. */
static __inline void gridKeyHeldSet(u16 *mask, u8 key)
{
    if (key == 5)
        *mask |= 1 << GRID_HELD_BUTTON5;
    if (key == 6)
        *mask |= 1 << GRID_HELD_BUTTON6;
    if (key == 4)
        *mask |= 1 << GRID_HELD_BUTTON4;
    if (key == 3)
        *mask |= 1 << GRID_HELD_BUTTON3;
}

/* Clears the held bit of direction key `key` in `mask`. */
static __inline void gridKeyHeldClear(u16 *mask, u8 key)
{
    if (key == 5)
        *mask &= ~(1 << GRID_HELD_BUTTON5);
    if (key == 6)
        *mask &= ~(1 << GRID_HELD_BUTTON6);
    if (key == 4)
        *mask &= ~(1 << GRID_HELD_BUTTON4);
    if (key == 3)
        *mask &= ~(1 << GRID_HELD_BUTTON3);
}

/* Moves the grid's row and column cursors by the pad, keeps the column inside a short last row, records
 * which direction keys are held and whether each cursor moved or pushes against an edge. Returns whether
 * either cursor moved, with the cursor sound when `playSound` is set. */
bool gridNavigationHandleConfirm(GridNavigation *grid, s32 playSound)
{
    if (grid->empty)
        return false;

    /* retail reads each list's top along with its offset and drops it */
    scrollListGetTop(&grid->rows);
    s32 previousRow = scrollListGetOffset(&grid->rows);
    scrollListGetTop(&grid->columns);
    s32 previousColumn = scrollListGetOffset(&grid->columns);
    bool rowMoved = false;
    bool columnMoved = false;
    FUN_002d56c4(20, 20, 20, 20);
    if (grid->rows.visibleRows > 1)
        rowMoved = FUN_001ff474(&grid->rows) != 0;

    s32 rowTop = scrollListGetTop(&grid->rows);
    s32 row = scrollListGetOffset(&grid->rows);
    objectGetLengthField(&grid->rows);
    s32 columns = objectGetLengthField(&grid->columns);
    if (grid->count / columns <= row)
        scrollListSetSelection(&grid->rows, grid->count / columns);
    if (!rowMoved && previousRow != row)
        rowMoved = true;
    if (grid->columns.visibleRows > 1)
        columnMoved = FUN_001ff474(&grid->columns) != 0;
    labelsReset();

    /* a short last row: keep the column cursor on its entries */
    scrollListGetTop(&grid->columns);
    s32 column = scrollListGetOffset(&grid->columns);
    s32 lastRowLength = grid->count % columns;
    if (lastRowLength != 0 && grid->count <= (rowTop + row) * columns + column) {
        if (column == previousColumn + 1 &&
            (padIsButtonPressed(grid->columns.keys[0]) || padIsButtonPressed(grid->columns.alternateKeys[0])) &&
            (grid->columns.flags & 4))
            scrollListSetSelection(&grid->columns, 0);
        else
            scrollListSetSelection(&grid->columns, lastRowLength - 1);
    }

    for (s32 i = 0; i < 4; i++) {
        bool held = false;
        if (grid->rows.keys[i] != 32 && slotIsActive(grid->rows.keys[i]))
            held = true;
        if ((grid->rows.alternateKeys[i] != 32 && slotIsActive(grid->rows.alternateKeys[i])) || held)
            gridKeyHeldSet(&grid->rowKeysHeld, grid->rows.keys[i]);
        else
            gridKeyHeldClear(&grid->rowKeysHeld, grid->rows.keys[i]);
    }
    for (s32 i = 0; i < 4; i++) {
        bool held = false;
        if (grid->columns.keys[i] != 32 && slotIsActive(grid->columns.keys[i]))
            held = true;
        if ((grid->columns.alternateKeys[i] != 32 && slotIsActive(grid->columns.alternateKeys[i])) || held)
            gridKeyHeldSet(&grid->columnKeysHeld, grid->columns.keys[i]);
        else
            gridKeyHeldClear(&grid->columnKeysHeld, grid->columns.keys[i]);
    }

    /* a held key changes the row unless the cursor already stood at that end last frame */
    s32 rowPosition = gridRowTop(grid) + gridRowOffset(grid);
    grid->changed = 0;
    if (grid->rowKeysHeld != 0) {
        if (((grid->rowKeysHeld >> GRID_HELD_BUTTON5) & 1) || ((grid->rowKeysHeld >> GRID_HELD_BUTTON4) & 1)) {
            if (scrollListGetOffset(&grid->rows) > 0 || grid->lastRowPosition != rowPosition)
                grid->changed = 1;
        }
        if (((grid->rowKeysHeld >> GRID_HELD_BUTTON6) & 1) || ((grid->rowKeysHeld >> GRID_HELD_BUTTON3) & 1)) {
            s32 position = gridRowTop(grid) + gridRowOffset(grid);
            if (gridRowCount(grid) - 1 > position || grid->lastRowPosition != rowPosition)
                grid->changed = 1;
        }
    }
    grid->lastRowPosition = rowPosition;

    s32 columnPosition = gridColumnTop(grid) + gridColumnOffset(grid);
    grid->columnChanged = 0;
    if (grid->columnKeysHeld != 0) {
        if (((grid->columnKeysHeld >> GRID_HELD_BUTTON5) & 1) || ((grid->columnKeysHeld >> GRID_HELD_BUTTON4) & 1)) {
            if (scrollListGetOffset(&grid->columns) > 0 || grid->lastColumnPosition != columnPosition)
                grid->columnChanged = 1;
        }
        if (((grid->columnKeysHeld >> GRID_HELD_BUTTON6) & 1) || ((grid->columnKeysHeld >> GRID_HELD_BUTTON3) & 1)) {
            s32 position = gridColumnTop(grid) + gridColumnOffset(grid);
            if (gridColumnCount(grid) - 1 > position || grid->lastColumnPosition != columnPosition)
                grid->columnChanged = 1;
            /* on the last entry of a short last row the column cannot move on */
            if (lastRowLength != 0 &&
                (rowTop + row) * columns + gridColumnOffset(grid) - grid->count == -1 &&
                gridColumnOffset(grid) == previousColumn)
                grid->columnChanged = 0;
        }
    }
    grid->lastColumnPosition = columnPosition;

    if (rowMoved || columnMoved) {
        if (playSound)
            eventQueueAddUniqueIfValid(0x100016c);
        return true;
    }
    return false;
}

} /* extern "C" */
