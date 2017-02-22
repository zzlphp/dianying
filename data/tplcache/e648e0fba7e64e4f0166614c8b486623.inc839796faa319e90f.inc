<?php
$z[0]=Array("match","<div id=\"showinfo\">[ÄÚÈÝ]</div><ul class=\"mmlist\">",5,80);
$z[1]=Array("trim","<a([^>]*)>",85,129);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",131,169);
$z[2][4]['replace']="";
$z[3]=Array("trim","<font([^>]*)>",171,218);
$z[3][4]['replace']="";
$z[4]=Array("trim","</font>",220,261);
$z[4][4]['replace']="";
$z[5]=Array("trim","<strong([^>]*)>",263,312);
$z[5][4]['replace']="";
$z[6]=Array("trim","</strong>",314,357);
$z[6][4]['replace']="";
$z[7]=Array("trim","<span([^>]*)>",359,406);
$z[7][4]['replace']="";
$z[8]=Array("trim","</span>",408,449);
$z[8][4]['replace']="";
$z[9]=Array("function","\$rpstr = \"www.piaohua.com\";\r\n\$mystr = \"www.xiaozhizhu.net\";\r\n@me = str_replace(\$rpstr,\$mystr,@me);\r\n\r\n\r\n",454,589);

?>