## Nitrogen Language

Nitrogen Language built by: Vresod and AVCADO

## Why!?
So, you know javascript, right? Well, we all know javascript...is...horrid.
I built Nitrogen because of this.

I hate JavaScript and it's...well, horrendous packages and 
syntax (`[]+[]`).

Nitrogen does not allow this to take place! It has type safety,
and is written in C and some others.


## Credits.
Credits:

Vresod for fixing gramatical errors.


## OK, I like it, give me a demo!
You can run `./a.out` in `interpreter/`.
If you cannot find it, do this: `gcc interpreter/index.c && ./interpreter/a.out`

### I'm to lazy for that, I want a demo!
Ok.


#### Error Handling:

```
err("syntax", "foo", "foo.nit", "2:10")
*******
```
Please note that this is not meant for interpreters.

If you would like to use errors in the interpreter, please follow this:

```
errI("foo")
```
This would output the following: `Custom Error - foo - interpret.nit(1:1)`.


#### Logging (WIP as of 6/3/2020)

Logging is an important part of any language.
It allows the user/dev to be able to print to stdout.

Here is an example of it, in Nitrogen, in action!
```
log("Hi!")
```

This prints out hi  to stdout.

There are many variations of log.

**LOG VARIATIONS**
```
log() - normal
logI() - integer log
logC() - char log
logF() - float log
logO() - octal log
```

#### Input
inp() is the function that is required to do input

Example:
```
inp("What's your name? ")
```

StdOut:
```
What's your name? foo
>
```
Once you type enter, inp will exit.


