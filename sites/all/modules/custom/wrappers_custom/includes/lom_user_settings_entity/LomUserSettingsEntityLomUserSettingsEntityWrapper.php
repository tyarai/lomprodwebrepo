<?php
/**
 * @file
 * class LomUserSettingsEntityLomUserSettingsEntityWrapper
 */

module_load_include('php','wrappers_custom','includes/lom_user_settings_entity/WdLomUserSettingsEntityWrapper');
class LomUserSettingsEntityLomUserSettingsEntityWrapper extends WdLomUserSettingsEntityWrapper {

  protected $entity_type = 'lom_user_settings_entity';
  private static $bundle = 'lom_user_settings_entity';

  /**
   * Create a new lom_user_settings_entity lom_user_settings_entity.
   *
   * @param array $values
   * @param string $language
   * @return LomUserSettingsEntityLomUserSettingsEntityWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'lom_user_settings_entity', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new LomUserSettingsEntityLomUserSettingsEntityWrapper($entity_wrapper->value());
  }

  
    public static function export($user_uid){
        
        $settings = array();
        
        if($user_uid != NULL){
        
            try{

                $query  = " SELECT e.id,e.title,e.uid,e.created,e.changed,e.value FROM {eck_lom_user_settings_entity} e ";
                $query .= " WHERE e.uid = ".$user_uid;
                $query .= " ORDER BY e.id ASC ";

                $result = db_query($query);

                while($record = $result->fetchAssoc()){
                    $settings[] = array(
                        'id'        => intval($record['id']),
                        'title'     => $record['title'],
                        'created'   => date('Y-m-d',$record['created']),
                        'changed'   => date('Y-m-d',$record['changed']),
                        'uid'       => intval($record['uid']),
                        'value'     => $record['value'],
                    );
                }

            }catch(Exception $e){
                drupal_set_message(t('[LomSpecies::getAllSpeciesKeyedByNID()] Error: @e',array('@e'=>$e->getMessage())),'error');
            }

        }
        return $settings;
    }
}