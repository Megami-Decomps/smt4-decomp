/* NON_MATCHING: member/body order now follows retail (leading words, the state block, the two heap records, then the other words); armcc still unrolls the state-block clear by two inside the member constructor where retail stores the twenty words straight, and schedules the vtable-pointer stores earlier. */
#include "classes/Obj420dec.h"

/* Everything starts cleared; the two heap records initialize themselves. */
Obj420dec::Obj420dec() : unk04(0), unk08(0)
{
    unk0c = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    unk1c = 0;
}
