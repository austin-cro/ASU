%%%%%%%%%%%%%%%%%%%%%%%%
%AUSTIN CROTHERS
%12/10/13
%PROLOG ASSIGNMENTS
%CST220
%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%FAMILY TREE&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
parent(X,Y):-mother(X,Y).%is true if X is a parent of Y
parent(X,Y):-father(X,Y).%is true is x is a parent of Y
same_generation(X,Y):-parent(X,Y). % is true is X is a descendent of Y
same_generation(X,Y):-parent(X,Z),same_generation(Z,Y).%is true X isa descendentof Y
mother(lisa,abe).
mother(lisa,sarah).
mother(sarah,susan).
mother(susan,jack).
mother(susan,phil).
mother(mary,jill).
mother(jill,rick).
mother(nancy,john).
father(rob,jack).
father(rob,phil).
father(phil,ann).
father(jack,kim).
father(jack,jim).
father(jim,martha).
father(abe,john).
father(john,jill).
father(bill,susan).
father(tony,abe).
father(tony,sarah).


