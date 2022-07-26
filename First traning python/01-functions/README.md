Create a functions.py file with 4 functions:

def printer(text: str, err: bool = False) -> int: ...

Will strictly print text to stdout if err is False or unset, and to stderr if err is True. In any case, it should return the length of the displayed text.



f my_map(function: Callable, data: List[Any]) -> List[Any]: ...
def my_filter(function: Callable, data: List[Any]) -> List[Any]: ...
def my_reduce(function: Callable, data: List[Any]) -> Any: ...

Will mimic the original functions' behaviours:

map
filter
reduce
The only difference being that you will return a list instead of a generator.

In order to do that, you'll have to explicitely use for loops for now. We'll use another way during the next stage.

Example