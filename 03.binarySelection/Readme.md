# BINARY SELECTION CONTROL STRUCTURE FLOWCHARTS
## IF Statement
![IF Statement](https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/03.binarySelection/if_statement.drawio.png)

    int x = 3;
    if (x == 3) {
        //statement(s)
    }
*Notes:*
- *`if (x = 3)` will always return true because the code has assigned the value of 3 to `x` and returned `true` that the assignment was successful. This is a common logic error.*

## IF ELSE Statement
![IF ELSE Statement](https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/03.binarySelection/if_else_statement.drawio.png)

    int x = 3;
    if (x == 3) {
        //true statement(s)
    } else {
        //false statement(s)
    }

## IF ELSE IF ELSE Statement
![IF IF ELSE ELSE Statement](https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/03.binarySelection/if_else_if_statement.drawio.png)

    int x = 3;
    if (x == 3) {
        //true statement(s)
    } else if (x == 2) {
        //true statement(s)
    } else {
        //false statement(s)
    }
*Notes:*
- *If more than one binary logic test is `true` only the first branch will be executed as the flow chart shows that once an `if` or `else if` branch is executed, the logic flow exists the conditional structure.*

## SWITCH CASE Statement
![SWITCH CASE Statement](https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/03.binarySelection/switch_case_statement.drawio.png)

    int x = random(0, 3);
    switch (x) {
        case 1:
            //do something when x equals 1
            break;
        case 2:
            //do something when x equals 2
            break;
        default:
            // if nothing else matches, do the default
            // default is optional
            break;
    }

*Notes:*
- *This is one of the more advanced binary selection control structures*
- *As per the flowchart you can add/remove `break;` to allow multiple case statements to be applied for example in the above flowchart if `x = 1;` the code would enter at `case 1` then run `case 2` until it reaches the fist `break;`.*