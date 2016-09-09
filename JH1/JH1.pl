#!/usr/bin/perl


# $t=<>;while($t--){$n=<>;$p=$q=0;@k=split(' ',<>);while($n--){$p+=$k[$n]if$n%2>0&&@k[$n]>0;$q+=$k[$n]if$n%2<1&&@k[$n]<0}print(($p<$q*-1)?"Every Girl Lies!\n":"Some Mirrors Lie!\n");}



$t=<>;

while($t--){

    $n=<>;
    $p=$q=0;
    @k=split(' ',<>);

    while($n--){
        
        $p+=$k[$n]if$n%2>0&&@k[$n]>0;
        $q+=$k[$n]if$n%2<1&&@k[$n]<0
        
    
    }
    
    print(($p<$q*-1)?"Every Girl Lies!\n":"Some Mirrors Lie!\n");
}
