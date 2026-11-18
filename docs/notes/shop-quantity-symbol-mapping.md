# Shop quantity method mapping

The Apocalypse symbol/configuration and source filename already identify
`Obj536044::shopQuantityStep`, but its definition, class declaration and
three handler entries retained the older address-based name. The compiler
therefore emitted the wrong section name and the configured unit could not
be carved for comparison. Align these names without changing the method body.

The recovered configured unit has 150 diagnostic differences and remains
NON_MATCHING. Its 3364-byte compiled text and complete normalized relocation
listing are identical to the same body carved under the old name. This is a
mapping repair, not a newly matched function.

The existing SMT4 global callback named shopQuantityStep is a different
function from this Apocalypse class member. A narrow declaration-check
annotation documents that name collision; the ceiling is not increased.

Verification against 0ea593357: 43 affected units, the missing-section failure
repaired, 42 unchanged, 19 exact preserved, no new failures/regressions.
Declaration checks and seven tests pass at ceiling24543. Full Apocalypse
build17333/17334 retains only inherited FUN_001a91ec Linux compiler failure;
matched relink is byte-identical to retail with9294 compiled functions proven.
