<li><a href="[field:arcurl/]" class="img"><img src="[field:picname/]" alt="[field:title/]" width="120" height="150" border="0" /></a><a href="[field:arcurl/]"><strong>[field:title/]</strong></a><span> [field:pubdate runphp='yes'] 
    $a="<font color=red>".strftime('%Y-%m-%d',@me)."</font>"; 
    $b=strftime('%Y-%m-%d',@me); 
    $ntime = time(); 
    $day3 = 3600 * 24; 
    if(($ntime - @me) < $day3) @me = $a; 
    else @me =$b; 
    [/field:pubdate]
</span></li>