@ Checks the state of the Pokédex Seen flag of the specified Pokemon
@ The result is stored in VAR_RESULT
    .macro getseenmon species:req
    setvar VAR_TEMP_1, \species
    specialvar VAR_RESULT, GetSeenMon
    .endm

@ Checks the state of the Pokédex Caught flag of the specified Pokemon
@ The result is stored in VAR_RESULT
    .macro getcaughtmon species:req
    setvar VAR_TEMP_1, \species
    specialvar VAR_RESULT, GetCaughtMon
    .endm