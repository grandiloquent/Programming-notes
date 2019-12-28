# C++

## Books

### C++17 STL Cookbook

- The New C++17 Features

  - Introduction
  - Using structured bindings to unpack bundled return values
  - Limiting variable scopes to if and switch statements
  - Profiting from the new bracket initializer rules
  - Letting the constructor automatically deduce the resulting template class type
  - Simplifying compile time decisions with constexpr-if
  - Enabling header-only libraries with inline variables
  - Implementing handy helper functions with fold expressions

- STL Containers

  - Introduction
  - Using the erase-remove idiom on std::vector
  - Deleting items from an unsorted std::vector in O(1) time
  - Accessing std::vector instances the fast or the safe way
  - Keeping std::vector instances sorted
  - Inserting items efficiently and conditionally into std::map
  - Knowing the new insertion hint semantics of std::map::insert
  - Efficiently modifying the keys of std::map items
  - Using std::unordered_map with custom types
  - Filtering duplicates from user input and printing them in alphabetical order with std::set
  - Implementing a simple RPN calculator with std::stack
  - Implementing a word frequency counter with std::map
  - Implement a writing style helper tool for finding very long sentences in text with std::multimap
  - Implementing a personal to-do list using std::priority_queue

- Iterators

  - Introduction
  - Building your own iterable range
  - Making your own iterators compatible with STL iterator categories
  - Using iterator adapters to fill generic data structures
  - Implementing algorithms in terms of iterators
  - Iterating the other way around using reverse iterator adapters
  - Terminating iterations over ranges with iterator sentinels
  - Automatically checking iterator code with checked iterators
  - Building your own zip iterator adapter

- Lambda Expressions

  - Introduction
  - Defining functions on the run using lambda expressions
  - Adding polymorphy by wrapping lambdas into std::function
  - Composing functions by concatenation
  - Creating complex predicates with logical conjunction
  - Calling multiple functions with the same input
  - Implementing transform_if using std::accumulate and lambdas
  - Generating cartesian product pairs of any input at compile time

- STL Algorithm Basics

  - Introduction
  - Copying items from containers to other containers
  - Sorting containers
  - Removing specific items from containers
  - Transforming the contents of containers
  - Finding items in ordered and unordered vectors
  - Limiting the values of a vector to a specific numeric range with std::clamp
  - Locating patterns in strings with std::search and choosing the optimal implementation
  - Sampling large vectors
  - Generating permutations of input sequences
  - Implementing a dictionary merging tool

- Advanced Use of STL Algorithms

  - Introduction
  - Implementing a trie class using STL algorithms
  - Implementing a search input suggestion generator with tries
  - Implementing the Fourier transform formula with STL numeric algorithms
  - Calculating the error sum of two vectors
  - Implementing an ASCII Mandelbrot renderer
  - Building our own algorithm - split
  - Composing useful algorithms from standard algorithms - gather
  - Removing consecutive whitespace between words
  - Compressing and decompressing strings

- Strings, Stream Classes, and Regular Expressions

  - Introduction
  - Creating, concatenating, and transforming strings
  - Trimming whitespace from the beginning and end of strings
  - Getting the comfort of std::string without the cost of constructing std::string objects
  - Reading values from user input
  - Counting all words in a file
  - Formatting your output with I/O stream manipulators
  - Initializing complex objects from file input
  - Filling containers from std::istream iterators
  - Generic printing with std::ostream iterators
  - Redirecting output to files for specific code sections
  - Creating custom string classes by inheriting from std::char_traits
  - Tokenizing input with the regular expression library
  - Comfortably pretty printing numbers differently per context on the fly
  - Catching readable exceptions from std::iostream errors

- Utility Classes

  - Introduction
  - Converting between different time units using std::ratio
  - Converting between absolute and relative times with std::chrono
  - Safely signalizing failure with std::optional
  - Applying functions on tuples
  - Quickly composing data structures with std::tuple
  - Replacing void* with std::any for more type safety
  - Storing different types with std::variant
  - Automatically handling resources with std::unique_ptr
  - Automatically handling shared heap memory with std::shared_ptr
  - Dealing with weak pointers to shared objects
  - Simplifying resource handling of legacy APIs with smart pointers
  - Sharing different member values of the same object
  - Generating random numbers and choosing the right random number engine
  - Generating random numbers and letting the STL shape specific distributions

- Parallelism and Concurrency

  - Introduction
  - Automatically parallelizing code that uses standard algorithms
  - Putting a program to sleep for specific amounts of time
  - Starting and stopping threads
  - Performing exception safe shared locking with std::unique_lock and std::shared_lock
  - Avoiding deadlocks with std::scoped_lock
  - Synchronizing concurrent std::cout use
  - Safely postponing initialization with std::call_once
  - Pushing the execution of tasks into the background using std::async
  - Implementing the producer/consumer idiom with std::condition_variable
  - Implementing the multiple producers/consumers idiom with std::condition_variable
  - Parallelizing the ASCII Mandelbrot renderer using std::async
  - Implementing a tiny automatic parallelization library with std::future

- Filesystem

  - Introduction
  - Implementing a path normalizer
  - Getting canonical file paths from relative paths
  - Listing all files in directories
  - Implementing a grep-like text search tool
  - Implementing an automatic file renamer
  - Implementing a disk usage counter
  - Calculating statistics about file types
  - Implementing a tool that reduces folder size by substituting duplicates with symlinks

### Effective Modern C++

- Introduction

  - Terminology and Conventions
  - Reporting Bugs and Suggesting Improvements

- 1. Deducing Types

  - Item 1: Understand template type deduction.
  - Item 2: Understand auto type deduction.
  - Item 3: Understand decltype.
  - Item 4: Know how to view deduced types.

- 2. auto

  - Item 5: Prefer auto to explicit type declarations.
  - Item 6: Use the explicitly typed initializer idiom when auto deduces undesired types.

- 3. Moving to Modern C++

  - Item 7: Distinguish between () and {} when creating objects.
  - Item 8: Prefer nullptr to 0 and NULL.
  - Item 9: Prefer alias declarations to typedefs.
  - Item 10: Prefer scoped enums to unscoped enums.
  - Item 11: Prefer deleted functions to private undefined ones.
  - Item 12: Declare overriding functions override.
  - Item 13: Prefer const_iterators to iterators.
  - Item 14: Declare functions noexcept if they won’t emit exceptions.
  - Item 15: Use constexpr whenever possible.
  - Item 16: Make const member functions thread safe.
  - Item 17: Understand special member function generation.

- 4. Smart Pointers

  - Item 18: Use std::unique_ptr for exclusive-ownership resource management.
  - Item 19: Use std::shared_ptr for shared-ownership resource management.
  - Item 20: Use std::weak_ptr for std::shared_ptr-like pointers that can dangle.
  - Item 21: Prefer std::make_unique and std::make_shared to direct use of new.
  - Item 22: When using the Pimpl Idiom, define special member functions in the implementation file.

- 5. Rvalue References, Move Semantics, and Perfect Forwarding

  - Item 23: Understand std::move and std::forward.
  - Item 24: Distinguish universal references from rvalue references.
  - Item 25: Use std::move on rvalue references, std::forward on universal references.
  - Item 26: Avoid overloading on universal references.
  - Item 27: Familiarize yourself with alternatives to overloading on universal references.
  - Item 28: Understand reference collapsing.
  - Item 29: Assume that move operations are not present, not cheap, and not used.
  - Item 30: Familiarize yourself with perfect forwarding failure cases.

- 6. Lambda Expressions

  - Item 31: Avoid default capture modes.
  - Item 32: Use init capture to move objects into closures.
  - Item 33: Use decltype on auto&& parameters to std::forward them.
  - Item 34: Prefer lambdas to std::bind.

- 7. The Concurrency API

  - Item 35: Prefer task-based programming to thread-based.
  - Item 36: Specify std::launch::async if asynchronicity is essential.
  - Item 37: Make std::threads unjoinable on all paths.
  - Item 38: Be aware of varying thread handle destructor behavior.
  - Item 39: Consider void futures for one-shot event communication.
  - Item 40: Use std::atomic for concurrency, volatile for special memory.

- 8. Tweaks

  - Item 41: Consider pass by value for copyable parameters that are cheap to move and always copied.
  - Item 42: Consider emplacement instead of insertion.

### Mastering the C++17 STL

- Classical Polymorphism and Generic Programming

  - Concrete monomorphic functions
  - Classically polymorphic functions
  - Generic programming with templates
  - Summary

- Iterators and Ranges

  - The problem with integer indices
  - On beyond pointers
  - Const iterators
  - A pair of iterators defines a range
  - Iterator categories
  - Input and output iterators
  - Putting it all together
  - The deprecated std::iterator
  - Summary

- The Iterator-Pair Algorithms

  - A note about headers
  - Read-only range algorithms
  - Shunting data with std::copy
  - Variations on a theme - std::move and std::move_iterator
  - Complicated copying with std::transform
  - Write-only range algorithms
  - Algorithms that affect object lifetime
  - Our first permutative algorithm: std::sort
  - Swapping, reversing, and partitioning
  - Rotation and permutation
  - Heaps and heapsort
  - Merges and mergesort
  - Searching and inserting in a sorted array with std::lower_bound
  - Deleting from a sorted array with std::remove_if
  - Summary

- The Container Zoo

  - The notion of ownership
  - The simplest container: `std::array<T, N>`
  - The workhorse: `std::vector<T>`
  - The speedy hybrid: `std::deque<T>`
  - A particular set of skills: `std::list<T>`
  - Roughing it with `std::forward_list<T>`
  - Abstracting with `std::stack<T>` and `std::queue<T>`
  - The useful adaptor: `std::priority_queue<T>`
  - The trees: `std::set<T>` and `std::map<K, V>`
  - Oddballs: `std::multiset<T>` and `std::multimap<K, V>`
  - The hashes: `std::unordered_set<T>` and `std::unordered_map<K, V>`
  - Where does the memory come from?
  - Summary

- Vocabulary Types

  - The story of std::string
  - Tagging reference types with reference_wrapper
  - C++11 and algebraic types
  - Working with std::tuple
  - Expressing alternatives with std::variant
  - Delaying initialization with std::optional
  - Revisiting variant
  - Infinite alternatives with std::any
  - Type erasure in a nutshell
  - Again with the type erasure: std::function
  - Summary

- Smart Pointers

  - The origins of smart pointers
  - Smart pointers never forget
  - Automatically managing memory with `std::unique_ptr<T>`
  - Reference counting with `std::shared_ptr<T>`
  - Denoting un-special-ness with `observer_ptr<T>`
  - Summary

- Concurrency

  - The problem with volatile
  - Using `std::atomic<T>` for thread-safe accesses
  - Taking turns with std::mutex
  - Always associate a mutex with its controlled data
  - Special-purpose mutex types
  - Waiting for a condition
  - Promises about futures
  - Packaging up tasks for later
  - The future of futures
  - Speaking of threads...
  - Thread exhaustion and std::async
  - Building your own thread pool
  - Summary

- Allocators

  - An allocator is a handle to a memory resource
  - Defining a heap with memory_resource
  - Using the standard memory resources
  - The 500 hats of the standard allocator
  - Sticking a container to a single memory resource
  - Using the standard allocator types
  - Making a container allocator-aware
  - Propagating downwards with scoped_allocator_adaptor
  - Summary

- Iostreams

  - The trouble with I/O in C++
  - Buffering versus formatting
  - Using the POSIX API
  - Using the standard C API
  - The classical iostreams hierarchy
  - Converting numbers to strings
  - Converting strings to numbers
  - Reading a line or word at a time
  - Summary

- Regular Expressions

  - What are regular expressions?
  - Reifying regular expressions into std::regex objects
  - Matching and searching
  - Iterating over multiple matches
  - Using regular expressions for string replacement
  - A primer on the ECMAScript regex grammar
  - Summary

- Random Numbers

  - Random numbers versus pseudo-random numbers
  - The problem with rand()
  - Solving problems with `<random>`
  - Dealing with generators
  - Dealing with distributions
  - Summary

- Filesystem

  - A note about namespaces
  - A very long note on error-reporting
  - Filesystems and paths
  - Statting files with directory_entry
  - Walking directories with directory_iterator
  - Modifying the filesystem
  - Reporting disk usage
  - Summary

