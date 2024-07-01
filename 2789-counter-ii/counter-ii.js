
var createCounter = function(init) {
    let res=init;
     return {
        increment:()=>
            ++res
        ,
        reset:()=>
            res=init            
    , 
    decrement:()=>
          --res           
    ,
    }
};

