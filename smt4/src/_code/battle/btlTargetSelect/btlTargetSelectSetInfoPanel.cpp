/* NON_MATCHING: option argument reload/scratch allocation and two-float projection copies differ; -O2 candidate. */
#include "battle/btlTargetSelect.h"
#include "util/FUN_0027db08.h"

struct TargetInfoPosition { f32 x, y, z; };
struct TargetInfoProjection { f32 x, y; };
struct TargetInfoDefinition {
    u8 unk00[2];
    u8 category;
    u8 unk03[0x21];
    u16 resistances[8];
};
struct TargetInfoPanel {
    BtlUiObject base;
    char name[32];
    u8 level;
    u8 unk25[3];
    u32 category;
    char categoryName[32];
    u8 resistances[8];
    u8 options[6];
    u8 unk5a[2];
    TargetInfoPosition position;
    TargetInfoProjection projected;
    f32 rightEdge;
    u8 unk74[4];
    f32 leftMargin;
    u8 unk7c[0x5c];
    f32 width;
    u8 unkdc[8];
    u8 side;
    u8 unke5[0xf];
    f32 offset;
};
static __inline TargetInfoPanel *targetInfoPanel(BtlTargetSelect *selection)
{
    return (TargetInfoPanel *)selection->primary;
}
extern "C" {
extern BtlTargetSelect *g_btlTargetSelect;
const TargetInfoDefinition *dataTable00FindById(u32);
const char *FUN_002bd06c(u32);
const char *demonGetRaceLabel(u32, u32);
u8 FUN_0029e9cc(u32);
void textFormatBuffer(char *, const char *, ...);
void FUN_002630e0(TargetInfoProjection *, u32, u32, const TargetInfoPosition *);

void btlTargetSelectSetInfoPanel(const TargetInfoPosition *position, u32 id, u32 option0, u32 option1,
                 u8 option2, u8 option3, u8 option4, u8 option5)
{
    BtlTargetSelect *selection = g_btlTargetSelect;
    const TargetInfoDefinition *definition = dataTable00FindById(id);
    const char *name = FUN_002bd06c(id);
    textFormatBuffer(targetInfoPanel(selection)->name, "%s", name);
    const char *category = demonGetRaceLabel(id, 0);
    textFormatBuffer(targetInfoPanel(selection)->categoryName, "%s", category);
    targetInfoPanel(selection)->level = FUN_0029e9cc(id);
    targetInfoPanel(selection)->category = definition->category;
    for (u32 i = 0; i < 8; ++i)
        targetInfoPanel(selection)->resistances[i] = definition->resistances[i] >> 10;
    targetInfoPanel(selection)->options[0] = option0;
    targetInfoPanel(selection)->options[1] = option1;
    targetInfoPanel(selection)->options[2] = option2;
    targetInfoPanel(selection)->options[3] = option3;
    targetInfoPanel(selection)->options[4] = option4;
    targetInfoPanel(selection)->options[5] = option5;
    TargetInfoPanel *panel = targetInfoPanel(selection);
    panel->position.x = position->x;
    panel->position.y = position->y;
    panel->position.z = position->z;
    TargetInfoProjection projected;
    FUN_002630e0(&projected, 0, FUN_0027db08(0), &panel->position);
    panel->projected = projected;
    if (projected.x > 210.0f) {
        panel->side = 0;
        panel->offset = projected.x - panel->leftMargin;
    } else {
        panel->side = 1;
        panel->offset = panel->rightEdge + panel->width - projected.x;
    }
}
}
