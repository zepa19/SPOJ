#!/usr/bin/perl



while(<>) {
    
    last if /0 0 0/;
    
    @t = split(' ', $_);
    
    if($t[1]-$t[0]==$t[2]-$t[1]) {
    
        $x=$t[2]+$t[1]-$t[0];
        print "AP ".$x."\n";
    
    }
    else {
        $x=$t[2]*$t[1]/$t[0];
        print "GP ".$x."\n";
    }
    
    
    
}
