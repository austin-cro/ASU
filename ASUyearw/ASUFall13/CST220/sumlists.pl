%%%%%%%%%%%%%%%%SUMLISTS%%%%%%%%%%%%%%%%%%%%%%%%
sumlists([],[],[]).
sumlists([H|T],[],[H|T]).
sumlists([],[H|T],[H|T]).
sumlists([H1|L1],[H2|L2],[R|L3]):-R is (H1+H2),sumlists(L1,L2,L3).
