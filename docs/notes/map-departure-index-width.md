# Departure-index input width

`mapSetDepartureIndex` accepts a full-width index and narrows it when storing the
save block's byte field. The setter keeps the incoming value through
`gameGetMapBlock` and then writes one byte. Declaring its argument `u8` can match
the setter itself while imposing an incorrect narrowing contract on callers.

The large IV controllers pass both a signed halfword table field and a full-word
game-state field without masking them first. `MapSpawn.h` therefore owns a
full-width `s32` argument, consistent with the existing departure-point caller.
The callee alone does not establish the original signedness; all callers agree
on the full-width representation and the byte store determines the saved value.

Two decompiled no-argument calls now explicitly pass zero, as their native call
sites do. The canonical getter remains `u8`: its body loads the saved byte.
The nine affected units preserve their complete outputs, including five exact
functions. This is a source-contract correction, not a newly matched function.
