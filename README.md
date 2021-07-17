# lvCpp

lvCpp library was made to help you print latvian language symbols in c++ console.

### Usage

1. Download/clone lvCpp project
2. Place lvCpp folder in your project root path
3. Include lvCpp library `#include "../lvCpp.h"`
4. Call `lvCpp::drawLVChar` function with parameter you need

---
### Example program

```c++
#include <iostream>
#include "../lvCpp.h"

int main() {
    std::cout << "Printing letter 'ū': ";
    lvCpp::drawLVChar("u");
    getchar();
    return 0;
}
```

**Output**

> ```Printing letter 'ū': ū```

---
## Supported parameters

| Parameter | Output |
|   -----   |  ----- |
|  ```a```  | ```ā```|
|  ```A```  | ```Ā```|
|  ```c```  | ```č```|
|  ```C```  | ```Č```|
|  ```e```  | ```ē```|
|  ```E```  | ```Ē```|
|  ```g```  | ```ģ```|
|  ```G```  | ```Ģ```|
|  ```i```  | ```ī```|
|  ```I```  | ```Ī```|
|  ```k```  | ```ķ```|
|  ```K```  | ```Ķ```|
|  ```l```  | ```ļ```|
|  ```L```  | ```Ļ```|
|  ```n```  | ```ņ```|
|  ```N```  | ```Ņ```|
|  ```s```  | ```š```|
|  ```S```  | ```Š```|
|  ```u```  | ```ū```|
|  ```U```  | ```Ū```|
|  ```z```  | ```ž```|
|  ```Z```  | ```Ž```|


Parameter should be a string(Example: `lvCpp::drawLVChar("u");`)

---
### History

1.0:
- released lvCpp
---
## License

Distributed under the MIT

## Credits

Created by rrenamed
