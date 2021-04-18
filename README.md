# slice
Part of my series of tools for String manipulation

## Sections

1. [Applying into your code](https://github.com/ciroDourado/slice#1-applying-into-your-code)
2. [How to use it](https://github.com/ciroDourado/slice#2-how-to-use-it)
3. [Contribuing](https://github.com/ciroDourado/slice#3-contribuing)

## 1. Applying into your code

Using this library requires nothing more than moving the source-code at src/ into your project diretory that hold your .c files. 

Finally, just the obvious, use GCC to compile all the code inside :

```
gcc *.c -o [executable_name]
```

Execute with (if you are in a Windows OS, use a backslash instead):

```
./[executable_name]
```

**[Back into sections](https://github.com/ciroDourado/slice#sections)** 

## 2. How to use it

| Function      | Parameter                                 | Return                      |
|---------------|-------------------------------------------|-----------------------------| 
| slice         | Number of bytes to be read; source String | Chars read                  |
| slice_or_copy | Number of bytes to be read; source String | Chars read or copied String |
| copy          | String to be copied                       | Copied String               |

If you want to take an example, check the code inside test/, at main.c.

"slice( )" expects a number of bytes to be readen from the given string. If the String passed is null, nothing will happen. 
If the number of bytes does not match the boundaries of your string, it's reference is thrown back again.
On the other hand, if it matches, a newly allocated string is returned back with only the specified bytes.

"slice_or_copy( )" expects a number of bytes to be readen from the given string. If the String passed is null, nothing will happen. 
If the number of bytes does not match the boundaries of your string, _a copy is returned back_.
On the other hand, if it matches, a newly allocated string is returned back with only the specified bytes.

"copy( )" a string to be copied. If the String passed is null, nothing will happen, or else, a deep copy is created.

**[Back into sections](https://github.com/ciroDourado/slice#sections)**

## 3. Contribuing

If you want to leave a comment, suggest an update (or anything else), mail me: `ciro dot brz at gmail dot com `.
Btw, I'm brazilian; my deepest apologies if I wrote something wrong, or mispelled something.

**[Back into sections](https://github.com/ciroDourado/slice#sections)** 
