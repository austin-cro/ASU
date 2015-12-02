qsort1(Inlist, Outlist):- qsort2(Inlist, Outlist - [ ]).

qsort2([X | Tail], A1 - Z2):- partition(X, Tail, Small, Large), qsort2(Small, A1 - [X | A2]),

qsort2(Large, A2 - Z2).

qsort2([ ], Z - Z).
