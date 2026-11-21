# A stupid "safe" printf implementation

Inspired by [this video](https://www.youtube.com/watch?v=QWuSlza0jbY). Got curious if it is possible to do a
"safe" printf implementation that doesn't rely on `va_list`

I used [this MAP macro implementation](https://github.com/swansontec/map-macro), and _Generic to make a list of
tagged unions at compile time

This is pretty much just a stupid and very basic demo, but anyone is free to use and improve it

Licensed under CC0 1.0 Universal
