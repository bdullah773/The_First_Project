


A Project to Operate The Red Led and Green Led According to Specific Conditions so that the Red Led Works Four Times Within four Seconds and Green Twice during two seconds and the two Leds works with each other by arduino and without using delay functions.

---
ex1 Git:

The millis() function in Arduino returns the number of milliseconds that have passed since the program started. Key points:

1. Data Type: Returns an unsigned long (ranges from 0 to 4,294,967,295).  
2. Usage: Used for timing events without blocking the program (unlike delay()).  
3. Overflow: After ≈50 days, it resets to zero (no issue if time intervals are compared correctly).  
4. Example:  
 ~~~ 
   unsigned long currentMillise = millis();
   
   if (millis() - currentMillis >= 1000) {
     // Execute something every second
    currentMillis = millis();
   }
   ~~~
5. Advantage: Enables multitasking by running multiple actions concurrently without halting the program.  
 
~~~
if (currentMillis - previousMillisGreen >= intervalGreen)
~~~
This checks if the time elapsed since the last action (currentMillis .
previousMillisGreen) is greater than or equal to a predefined interval (intervalGreen).
If true, it updates previousMillisGreen to the current time (currentMillis) and proceeds to the next logic.

~~~
if (greenCounter < 2)
~~~
This checks if the greenCounter is less than 2. If true, it means the LED has not yet blinked twice.

~~~
unsigned long currentMillis1 = millis();
if (currentMillis1 - previousMillisGreen1 >= intervalGreen)
{
  digitalWrite(ledGreen, LOW);
}
~~~
This attempts to turn off the LED after a specific interval (intervalGreen).


---

### 
<div>
  <p> this is the image for the project how to connect </p>
  <img src="https://github.com/bdullah773/Shamsan/blob/main/projectone/theDaigram%20of%20project.png">
</div>

---
This project was established by Eng. Abdullah Shamsan 
---

