# Problem_1
### Define a static global variable in `app.c` and accessing it in `main.c`:
It throws an error because the static variables have **internal linkage** meaning they are accessible on the same place ONLY where they are defined.  
> **For Example:** Like in case of when a static variable is defined inside a function it is ONLY accessible in that function only. \
>So similarly here the static variable **pi** is only accessible to the same file only and other file have no access to it.

---
<br>

# Problem 2
### Try to find a way still how we can access it from main.c.
So we can resolve the issue using 2 ways.
- Remove the static keyword keeping the vaiable as regular global. [This feels simple but changes the nature of the code (*if static is required somewhere.*)]
- Define a function that returns the static variable and call it as `extern` in main (This I think is a better approach.)