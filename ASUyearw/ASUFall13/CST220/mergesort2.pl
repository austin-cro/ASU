%%%%%%%%%%%%%%%%%%%%%%%%%%%MERGESORT%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
merge(List, List, []).
merge(List, [], List).

merge([List1|RestMerged], [List1|RestList1], [List2|RestList2]) :-
  List1 =< List2,
  merge(RestMerged,RestList1,[List2|RestList2]).
merge([List2|RestMerged], [List1|RestList1], [List2|RestList2]) :-
  List2 =< List1,
  merge(RestMerged,[List1|RestList1],RestList2).

mergesort([], []).
mergesort([A], [A]).

mergesort(L, R) :-
  length(L, N),
  Length1 is //(N, 2),
  Length2 is N - Length1,
  length(Unsorted1, Length1),
  length(Unsorted2, Length2),
  append(Unsorted1, Unsorted2, R),
  mergesort(Sorted1, Unsorted1),
  mergesort(Sorted2, Unsorted2),
  merge(L, Sorted1, Sorted2).
