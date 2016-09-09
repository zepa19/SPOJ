#!/usr/bin/perl

$t=<>;
use integer;
while($t--) {

    $n=<>;
    $r=0;
    
    until($n<1) {
        
        $n/=5;
        $r += $n;
    }
    
    print $r."\n";

}
