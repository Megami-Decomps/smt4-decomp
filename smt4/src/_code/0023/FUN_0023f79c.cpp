/* NON_MATCHING: first rewrite from the asm (185 rows against 202): retail spills both parameters (push {r0,r1}, reloads state/flags with ldrd) and keeps the two 3-float tables as stack copies of one 24-byte rodata block, merging the unit stride/index math into sl, which the one-pass loop here does not reproduce */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

#define FORMATION_ROWS 3
#define FIRST_FORMATION_SLOT 4
#define END_FORMATION_SLOT 54
#define MODEL_TABLE_SIZE 42

struct ModelData {
    u8 pad00[0x24];
    u16 width;                      /* 0x24: horizontal space the model takes */
};

struct ModelEntry {
    u8 pad00[4];
    s32 key;                        /* 0x04 */
    u8 pad08[8];
    ModelData *data;                /* 0x10 */
};

struct PartnerRef {
    u8 pad00[0x0C];
    s32 key;                        /* 0x0C */
};

/* One formation unit, stride 0x114 (observed fields only). */
struct FormationUnit {
    f32 position[3];                /* 0x00 */
    f32 target[3];                  /* 0x0C */
    u8 pad18[0x24];
    s8 row;                         /* 0x3C */
    u8 pad3D[3];
    f32 spacing;                    /* 0x40 */
    u8 pad44[0x0C];
    u32 flags;                      /* 0x50: 1 present, 0x10 hidden, 0x80 placed */
    u8 pad54[0x0E];
    s16 partnerId;                  /* 0x62 */
    u8 pad64[0x114 - 0x64];
};

struct BtlMainState {
    u8 pad0000[0x1E98];
    FormationUnit **units;          /* 0x1E98: points at the unit array base */
    u8 pad1E9C[0x2134 - 0x1E9C];
    ModelEntry *models[MODEL_TABLE_SIZE]; /* 0x2134 */
};

PartnerRef *FUN_0027da30(BtlMainState *state, s32 id);
int FUN_003c1964(s32 row);
int FUN_003364d0(BtlMainState *state, u32 flags);
void btlAssignGroupedActionOrder(BtlMainState *state, u32 flags);

/* Width model of the partner behind formation unit `unit`: found in the model table by key. */
static ModelData *formationUnitModel(BtlMainState *state, const FormationUnit *unit)
{
    PartnerRef *partner = FUN_0027da30(state, unit->partnerId);
    for (s32 i = 0; i < MODEL_TABLE_SIZE; i++) {
        ModelEntry *entry = state->models[i];
        if (entry != 0 && entry->key == partner->key) {
            return entry->data;
        }
    }
    return 0;
}

static s32 formationUnitInRow(const FormationUnit *unit, s32 row)
{
    return (unit->flags & 1) != 0 && (unit->flags & 0x80) != 0 && (unit->flags & 0x10) == 0 && unit->row == row;
}

/* Lines the placed units of each of the three formation rows up side by side, centred on x = 0 of the
 * row (at the row's depth), then assigns the grouped action order. Runs only when `flags` has 0x400. */
void FUN_0023f79c(BtlMainState *state, u32 flags)
{
    s32 count = 0;
    f32 span[FORMATION_ROWS] = { 35.0f, 20.0f, 50.0f };
    f32 depth[FORMATION_ROWS] = { 0.0f, 15.0f, -20.0f };

    if ((flags & 0x400) != 0) {
        for (s32 row = 0; row < FORMATION_ROWS; row++) {
            f32 total = 0.0f;
            f32 width = 0.0f;

            for (s32 i = FIRST_FORMATION_SLOT; i < END_FORMATION_SLOT; i++) {
                FormationUnit *unit = &(*state->units)[i];
                if (formationUnitInRow(unit, row)) {
                    ModelData *model = formationUnitModel(state, unit);
                    count++;
                    width = (f32)model->width;
                    total += width * (*state->units)[i].spacing;
                }
            }
            FUN_003c1964(row);
            total += (f32)(count - 1) * (width * 2.5f);
            f32 free = span[row] - total;
            f32 cursor;
            if (count != 1) {
                if (free > 0.0f) {
                    cursor = span[row] * -0.5f;
                } else {
                    cursor = free * 0.5f - span[row] * 0.5f;
                }
            } else {
                cursor = 0.0f;
            }

            for (s32 i = FIRST_FORMATION_SLOT; i < END_FORMATION_SLOT; i++) {
                FormationUnit *unit = &(*state->units)[i];
                if (formationUnitInRow(unit, row)) {
                    ModelData *model = formationUnitModel(state, unit);
                    f32 x = cursor;
                    if (count != 1) {
                        x += (*state->units)[i].spacing * ((f32)model->width * 0.5f);
                    }
                    unit = &(*state->units)[i];
                    unit->position[0] = x;
                    unit->position[1] = 0.0f;
                    unit->position[2] = depth[row];
                    unit = &(*state->units)[i];
                    unit->target[0] = x;
                    unit->target[1] = 0.0f;
                    unit->target[2] = depth[row];
                    f32 spacing = (*state->units)[i].spacing;
                    cursor = spacing * (f32)model->width + spacing * 2.5f + cursor;
                }
            }
        }
        FUN_003364d0(state, flags);
        btlAssignGroupedActionOrder(state, flags);
    }
}

} /* extern "C" */
