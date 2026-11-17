# Destination availability and interaction variants

Apocalypse `lmapRefreshDestinationAvailability` (formerly `FUN_00491c60`)
refreshes the normal and extra map-destination lists. Its 996-byte function
and 8-byte literal pool (1004 bytes total), including relocations, now match
retail exactly.

The old source omitted the second argument to `FUN_004083a8`. Retail loads the
entry's type into r1, tests the special type values, then leaves that type in
r1 while loading the ordinary entry ID into r0. The callee uses both arguments:
a signed interaction ID and an unsigned variant index. Its implementation
normalizes the return to a boolean. This was a missing source contract, not an
arbitrary register-allocation discrepancy.

`map/InteractionFlags.h` now owns that declaration. Seven existing consumers,
including the helper itself, keep identical compiled bytes and relocations.
The availability refresher becomes exact. A separate existing NON_MATCHING
caller, `FUN_004920d4`, also omitted four variant arguments; the native call sites
at +0x40C, +0x42C, +0x44C and +0x46C each receive a signed halfword from record
+0x8, +0xA, +0xC or +0xE. Only those arguments and its declaration are corrected.
That caller remains NON_MATCHING and is not counted as a new match. Its fuzzy
score is not an acceptance criterion for this independently evidenced ABI fix.

`map/LmapDestinationListsA.h` records the existing 0x64-byte entry layout and
the known owner prefix, with offset assertions. It does not claim that the
owner prefix is the full allocation. Existing list contents and counts are
unchanged. The caller of the refresher retains identical bytes with the typed
shared declaration. No external static data is introduced by this match.

The table producers independently confirm both capacities: 256 entries beginning
at +0x178C and 24 at +0x7B94, each with a 0x64-byte stride; the following separate
list begins at +0x84F8. The +0x8/+0xA entry halfwords select the full/half texture
frames, so the new shared view names them accordingly. The map selector at
owner +0x64 is read as a signed byte. Unrelated older partial views elsewhere
are not expanded or corrected as part of this match.
