# arduino-BufferStream

With this library you can convert any type of data to an Arduino Stream. First of all you have to include the library.
~~~
#include <BufferStream.h>
~~~
You can read data from a Stream or write data to a Stream. To read data you have to set the buffer from where you want to read and the size of that buffer. 
~~~
String data("This is the string!");
ReadBufferStream stream(data.c_str(), data.length());
~~~
Now you can read the data of the srteam like it was an Arduino Serial.
~~~
while (stream.available()) {
  Serial.print((char) stream.read());
}
~~~
To write data you have to set the buffer and the size buffer where you want to write. 
~~~
WriteBufferStream stream(data, 100);
~~~
Now you can send or write data like it was an Arduino Serial.  
~~~
// Add data to stream
  stream.print("Hello");
  stream.print(' ');
  stream.print("WriteStream!");

// Add the '\0' character at the end of the stream
  stream.write(uint8_t('\0'));
~~~
You can see a read and write String examples in the ![examples directory](https://github.com/IndustrialShields/arduino-BufferStream/tree/master/examples)
