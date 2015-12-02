%%%%%%%%%%TOWER OF HANOI%%%%%%%%%%%%%%%%%%%%%
diskamount(N) :- move(N,a,b,c).

move(0,_,_,_) :- !.
move(N,A,B,C) :-
    M is N-1,
    move(M,A,C,B),
    inform(A,B),
    move(M,C,B,A).

inform(X,Y) :- write('move the top disk from '),
	write(X),
	write(' to '),
	write(Y),
	nl.
