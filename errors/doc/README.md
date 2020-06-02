## Error documentation

## Format

This is the format for errors in Nitrogen:

{error} - {time} - {where it occured}

{details}

### Example:

Overflow Error - 4:44:56 PM - src/index.nit (6:3)

An overflow error has occured and the program crashed

```
for (i = 0; i < arr[].length; i++){
    arr[]++;
    ^^^^^^^^ error occurred here
        help: remove that line
}
```

## Why?
This makes the issue more efficient and less difficult to read.

It is also gives help on how you would fix it. (inspired by Rust)