# C: Arrays & Pointers — Code bundle + Notes

# Arrays & Pointers in C — Notes

## Quick table of contents
1. Basic array rules
2. Indexing and examples
3. Pointer basics
4. Pointer arithmetic
5. Pointer vs array name differences
6. sizeof trick to get array length
7. Common pitfalls (out-of-bounds, return inside loop)
8. Dynamic arrays (malloc / realloc)
9. Mixed-type data: use `struct`
10. Useful compile/run commands

---

## 1) Basic array rules
- Declaration: `int a[5];` allocates space for 5 integers (indexes 0..4).
- Initialization: `int a[5] = {1,2,3,4,5};` or `int a[] = {1,2,3};` (size deduced).
- Partial initialization is allowed: `int a[4] = {1,2};` remaining elements become 0.
- All elements in a C array must be the same type.

## 2) Indexing and examples
- Indexes start at 0. `a[0]` is first element, `a[1]` second, etc.
- Example to print using loop:
  ```c
  int arr[] = {10,20,30,40,50};
  int n = sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
````

## 3) Pointer basics

* Declaration: `int *p;` (p stores address of an int).
* `p = &arr[0];` or simply `p = arr;` (array name decays to pointer to first element).
* Dereference: `*p` gives the value at the address stored in `p`.

## 4) Pointer arithmetic

* `p + 1` is the address of the next element (not the value).
* `*(p + 1)` is the value at the next element — equivalent to `p[1]` or `arr[1]`.
* `arr[i]` is exactly the same as `*(arr + i)`.
* Incrementing pointers: `p++` moves pointer to the next element.

## 5) Pointer vs array name

* `arr` is not a variable; it is a fixed address (cannot be assigned or incremented).
* `int *p = arr; p = p + 1;` is allowed.
* `arr = arr + 1;` is invalid.

## 6) sizeof trick

* To compute number of elements: `int n = sizeof(arr) / sizeof(arr[0]);`
* Important: this works only when `arr` is an actual array in the same scope.
  If you pass `arr` to a function (`void f(int *a)`), inside the function `sizeof(a)` gives
  the size of pointer type, not the array.

## 7) Common pitfalls

* Out-of-bounds access (`arr[5]` when arr has 5 elements) → undefined behavior.
  The program may print garbage, crash, or appear to work. Always avoid it.
* Putting `return` inside a loop will exit the function at first iteration.
* Mixing types in the same array is not allowed. `char items[] = {'A', 10, 'Z'}` works because
  all are representable as char (integers).

## 8) Dynamic arrays (vector-like)

* Use `malloc`, `realloc`, and `free`:

  ```c
  int *a = malloc(initial_capacity * sizeof *a);
  // push:
  if (size >= capacity) {
      capacity *= 2;
      a = realloc(a, capacity * sizeof *a);
  }
  a[size++] = value;
  // free when done:
  free(a);
  ```
* Always check the return value of `malloc`/`realloc` for NULL.

## 9) Mixed-type data

* To store mixed types per element, use a `struct`:

  ```c
  struct Row { int id; char name[32]; float score; };
  struct Row table[10];
  ```

## 10) Useful compile/run commands

* Compile single file: `gcc file.c -o file`
* Compile with warnings: `gcc -Wall -Wextra file.c -o file`
* Run: `./file`

---

## Recommended exercises (practice)

1. Write a program that reads n integers into an array and prints them in reverse using pointers.
2. Write your own simple dynamic array that supports push and pop (use malloc/realloc).
3. Experiment with `sizeof` inside and outside functions to see the difference.
4. Intentionally (safely) print out-of-bounds values to observe undefined behavior — do this only for learning and on a safe environment.

## Final tips

* Prefer `size_t` when dealing with sizes and `sizeof`.
* Initialize arrays when possible.
* Be careful with pointer arithmetic and always keep bounds in mind.
* Use tools: compile with `-Wall -Wextra`, run with valgrind or address sanitizer (`-fsanitize=address`).

---

End of notes.

```

---

**How to use this document**
- Copy each `codes/XX_*.c` block to a file with the same filename and compile with the shown `gcc` commands.
- Copy the `notes.md` block to a file named `notes.md` for quick reference.

If you want, I can also produce a downloadable zip containing these files — tell me and I'll create it for you.

```
