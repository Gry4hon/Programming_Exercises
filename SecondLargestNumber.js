let listOfNumbers = [3, 5, 36, 2, 64, 325, 153];

function NthLargestNumber(numberList){
    for(let i=0; i < listOfNumbers.length - 1; i++){
        for(let j=1; j < listOfNumbers.length; j++){
            if(numberList[i] > numberList[j]){
                

            }
        }
        
        
    }

    for(let k=0; k < numberList.length; k++){
        console.log(numberList[k]);
    }

    //return numberList[nthLargestIndex];

}

NthLargestNumber(listOfNumbers);
//console.log("Second Largest is: " + NthLargestNumber(listOfNumbers));


