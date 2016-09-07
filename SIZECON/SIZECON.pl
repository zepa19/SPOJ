#!/usr/bin/perl

$t = <STDIN>;
$n = 0;
while($t--){

	$k = <STDIN>;
	if($k>0){
		$n += $k;
	}

}

print $n;
