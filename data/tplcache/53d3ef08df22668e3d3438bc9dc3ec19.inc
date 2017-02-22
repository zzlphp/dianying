{dede:noteinfo notename="11" channelid="1" macthtype="string"
    refurl="http://" sourcelang="gb2312" cosort="asc"
  isref="no" exptime="10" usemore="1" /}
{dede:listrule sourcetype="batch" rssurl="http://" regxurl="(#)"
startid="1" endid="" addv="1" urlrule="area" musthas=""
 nothas="" listpic="1" usemore="1"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}[(#)=>http://www.piaohua.com/html/lianxuju/list_(*).html; (*)=>1-1; typeid=>11]
{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div id="list">{/dede:areastart}
    {dede:areaend}</div>{/dede:areaend}
{/dede:listrule}
