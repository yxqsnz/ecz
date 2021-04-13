# Examples
Hello world
```cpp
#include "./path/to/ecz/ecz.h"
Integer main() {
  Println("Hello world!");
  Return 0;
}
```
Input
```cpp
#include "./path/to/ecz/ecz.h"
Integer main() {
  String name = Input("Type your name: ");
  Println("Hello, ",name);
  Return 0;
}
```
Press any key to continue

```cpp
#include "./path/to/ecz/ecz.h"
Integer main() {
  Pause("Press any key to continue...");
  Println("Working...");
  Return 0;
}
```
Menu
```cpp
void Exit() {
	exit(0);
};
void SayHey() {
	Println("Hey!");
};

Integer main() {

	Menu SimpleMenu = Menu();

	SimpleMenu.addOption("Say hey!");
	SimpleMenu.addOption("Exit");
	
	Char sl = SimpleMenu.show("Select an action.");
	switch (sl) {
	case '1':
		Exit();
		break;

	case '0':
		SayHey();
		break;
	default:
		break;
	}
  Return 0;
}
```
