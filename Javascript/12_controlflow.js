/*
IF

if (condition){

} else{

}
*/

const UserLoggedIn = true;
const debitCard = true;
const loggedInfromGoogle = false;
const loggedInfromemail = true;

if (UserLoggedIn && debitCard ){
    console.log("User logged in");
}

if (loggedInfromGoogle || loggedInfromemail){
    console.log("Logged in xd!!");
}

/*
SWITCH

switch(key){
    case value:

        break;
    
    default:
        break;
}
*/

const month  = 3;
switch(month){
    case 1:
        console.log("January");
        break;
    case 2:
        console.log("feb");
        break;
    case 3:
        console.log("March");
        break;
    case 4:
        console.log("April");
        break;
    default:
        break;
}

//Nullish coalescing Operator (??) : null undefined

let val1 = 5?? 10;
console.log(val1);
val1 = null ?? 10;
console.log(val1);

// basically this can be used negate out errors by providing a default value instead of null

