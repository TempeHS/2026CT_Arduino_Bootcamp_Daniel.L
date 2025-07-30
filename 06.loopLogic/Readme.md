# LOOP LOGIC CONTROL STRUCTURE FLOWCHARTS
## FOR Statement (Count Loop)
![FOR Statement](https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/06.loopLogic/for_statement.drawio.png)

    for (int i = 0; i <= 255; i++) {
        analogWrite(PWMpin, i);
        delay(10);
    }

## FOR EACH Statement (Count Loop)
![FOR EACH Statement](https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/06.loopLogic/foreach_statement.drawio.png)

    int arr[]={1,2,3,4,5};   //array initialization
    Serial.print("The elements are: ");
    for(int i : arr)
    {
    	Serial.print(i);
        Serial.print(", ");
    }

## WHILE Statement (Pre-test Loop)
![WHILE Statement](https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/06.loopLogic/while_statement.drawio.png)

    int x = 0;
    while (x < 200) {
        // do statement(s) something repetitive 200 times
        x = x + 1;
    }
*Notes:*
- *If no logic (i.e. an incrementor or a decrementor) is established to escape the loop it will repeat endlessly.*

## DO WHILE Statement (Post-test Loop)
![DO WHILE Statement](https://github.com/TempeHS/Ardunio_Bootcamp_Source/blob/main/06.loopLogic/do_while_statement.drawio.png)

    int x = 0;
    do {
        // do statement(s) something repetitive 200 times
        x = x + 1;
    } while (x < 200);
*Notes:*
- *As the flowchart shows the code will run once before testing the binary logic.*
- *If no logic (i.e. an incrementor or a decrementor) is established to escape the loop it will repeat endlessly.*

