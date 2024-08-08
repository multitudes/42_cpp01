# 42_cpp01



## ex00



## ex01
 

## ex02

## ex03

## ex04

## ex05

## ex06

### tests
to run the tests you can use the following command:
```bash
make 
make -C tests
```

## Debug
I use a debug macro in the code. To enable it you can uncomment this line in the makefile:
```makefile
# CXXFLAGS += -DNDEBUG
```
It is just a simple macro that prints the file and the line where it was called.
```
#ifdef NDEBUG
#define debug(...)
#else
#define debug(msg) \
    std::cerr << COLOR << __FILE__ << ":" << __LINE__ << ": " << msg << RESET << std::endl;
#endif
```
It is nice to be able to switch on and off the debug statements.  

## links
