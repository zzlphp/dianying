<?php
$z[0]=Array("global","",146,172);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",216,246);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",283,310);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",548,583);
$z[3][4]['filename']="head.htm";
$z[4]=Array("arclist","<li><a href=\"[field:arcurl/]\" class=\"img\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" width=\"120\" height=\"150\" border=\"0\" /></a><a href=\"[field:arcurl/]\"><strong>[field:title/]</strong></a><span> [field:pubdate runphp='yes'] \r\n    \$a=\"<font color=red>\".strftime('%Y-%m-%d',@me).\"</font>\"; \r\n    \$b=strftime('%Y-%m-%d',@me); \r\n    \$ntime = time(); \r\n    \$day3 = 3600 * 24; \r\n    if((\$ntime - @me) < \$day3) @me = \$a; \r\n    else @me =\$b; \r\n    [/field:pubdate]\r\n</span></li> ",723,1280);
$z[4][4]['row']="32";
$z[4][4]['titlelen']="24";
$z[4][4]['orderby']="pubdate";
$z[4][4]['idlist']="";
$z[5]=Array("channelartlist","\r\n      <dl>\r\n        <dt><span class=\"r\"><a href=\"{dede:field name='typeurl'/}\">¸ü¶à...</a></span><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a></dt>\r\n        <dd> {dede:arclist titlelen='30' row='6'}\r\n    <a href=\"[field:arcurl /]\">[field:title /]</a>\r\n      {/dede:arclist}\r\n          <div class=\"clear\"></div>\r\n        </dd>\r\n      </dl>",1358,1768);
$z[6]=Array("include","",2514,2551);
$z[6][4]['filename']="footer.htm";

?>